﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListLabelingJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLabelingJobsResult::ListLabelingJobsResult()
{
}

ListLabelingJobsResult::ListLabelingJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLabelingJobsResult& ListLabelingJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LabelingJobSummaryList"))
  {
    Aws::Utils::Array<JsonView> labelingJobSummaryListJsonList = jsonValue.GetArray("LabelingJobSummaryList");
    for(unsigned labelingJobSummaryListIndex = 0; labelingJobSummaryListIndex < labelingJobSummaryListJsonList.GetLength(); ++labelingJobSummaryListIndex)
    {
      m_labelingJobSummaryList.push_back(labelingJobSummaryListJsonList[labelingJobSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

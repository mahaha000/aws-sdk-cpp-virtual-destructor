﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeAvailablePatchesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAvailablePatchesResult::DescribeAvailablePatchesResult()
{
}

DescribeAvailablePatchesResult::DescribeAvailablePatchesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAvailablePatchesResult& DescribeAvailablePatchesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Patches"))
  {
    Aws::Utils::Array<JsonView> patchesJsonList = jsonValue.GetArray("Patches");
    for(unsigned patchesIndex = 0; patchesIndex < patchesJsonList.GetLength(); ++patchesIndex)
    {
      m_patches.push_back(patchesJsonList[patchesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

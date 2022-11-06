﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/GetExpenseAnalysisResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetExpenseAnalysisResult::GetExpenseAnalysisResult() : 
    m_jobStatus(JobStatus::NOT_SET)
{
}

GetExpenseAnalysisResult::GetExpenseAnalysisResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_jobStatus(JobStatus::NOT_SET)
{
  *this = result;
}

GetExpenseAnalysisResult& GetExpenseAnalysisResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DocumentMetadata"))
  {
    m_documentMetadata = jsonValue.GetObject("DocumentMetadata");

  }

  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("JobStatus"));

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ExpenseDocuments"))
  {
    Aws::Utils::Array<JsonView> expenseDocumentsJsonList = jsonValue.GetArray("ExpenseDocuments");
    for(unsigned expenseDocumentsIndex = 0; expenseDocumentsIndex < expenseDocumentsJsonList.GetLength(); ++expenseDocumentsIndex)
    {
      m_expenseDocuments.push_back(expenseDocumentsJsonList[expenseDocumentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Warnings"))
  {
    Aws::Utils::Array<JsonView> warningsJsonList = jsonValue.GetArray("Warnings");
    for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
    {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

  }

  if(jsonValue.ValueExists("AnalyzeExpenseModelVersion"))
  {
    m_analyzeExpenseModelVersion = jsonValue.GetString("AnalyzeExpenseModelVersion");

  }



  return *this;
}

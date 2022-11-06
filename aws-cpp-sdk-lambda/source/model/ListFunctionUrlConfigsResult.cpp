﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/ListFunctionUrlConfigsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFunctionUrlConfigsResult::ListFunctionUrlConfigsResult()
{
}

ListFunctionUrlConfigsResult::ListFunctionUrlConfigsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFunctionUrlConfigsResult& ListFunctionUrlConfigsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FunctionUrlConfigs"))
  {
    Aws::Utils::Array<JsonView> functionUrlConfigsJsonList = jsonValue.GetArray("FunctionUrlConfigs");
    for(unsigned functionUrlConfigsIndex = 0; functionUrlConfigsIndex < functionUrlConfigsJsonList.GetLength(); ++functionUrlConfigsIndex)
    {
      m_functionUrlConfigs.push_back(functionUrlConfigsJsonList[functionUrlConfigsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }



  return *this;
}

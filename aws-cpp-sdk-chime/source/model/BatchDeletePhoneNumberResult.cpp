﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/BatchDeletePhoneNumberResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeletePhoneNumberResult::BatchDeletePhoneNumberResult()
{
}

BatchDeletePhoneNumberResult::BatchDeletePhoneNumberResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDeletePhoneNumberResult& BatchDeletePhoneNumberResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PhoneNumberErrors"))
  {
    Aws::Utils::Array<JsonView> phoneNumberErrorsJsonList = jsonValue.GetArray("PhoneNumberErrors");
    for(unsigned phoneNumberErrorsIndex = 0; phoneNumberErrorsIndex < phoneNumberErrorsJsonList.GetLength(); ++phoneNumberErrorsIndex)
    {
      m_phoneNumberErrors.push_back(phoneNumberErrorsJsonList[phoneNumberErrorsIndex].AsObject());
    }
  }



  return *this;
}

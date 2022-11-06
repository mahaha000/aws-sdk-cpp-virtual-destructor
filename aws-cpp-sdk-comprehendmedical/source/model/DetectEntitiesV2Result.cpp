﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/DetectEntitiesV2Result.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ComprehendMedical::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DetectEntitiesV2Result::DetectEntitiesV2Result()
{
}

DetectEntitiesV2Result::DetectEntitiesV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DetectEntitiesV2Result& DetectEntitiesV2Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Entities"))
  {
    Aws::Utils::Array<JsonView> entitiesJsonList = jsonValue.GetArray("Entities");
    for(unsigned entitiesIndex = 0; entitiesIndex < entitiesJsonList.GetLength(); ++entitiesIndex)
    {
      m_entities.push_back(entitiesJsonList[entitiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnmappedAttributes"))
  {
    Aws::Utils::Array<JsonView> unmappedAttributesJsonList = jsonValue.GetArray("UnmappedAttributes");
    for(unsigned unmappedAttributesIndex = 0; unmappedAttributesIndex < unmappedAttributesJsonList.GetLength(); ++unmappedAttributesIndex)
    {
      m_unmappedAttributes.push_back(unmappedAttributesJsonList[unmappedAttributesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("PaginationToken"))
  {
    m_paginationToken = jsonValue.GetString("PaginationToken");

  }

  if(jsonValue.ValueExists("ModelVersion"))
  {
    m_modelVersion = jsonValue.GetString("ModelVersion");

  }



  return *this;
}

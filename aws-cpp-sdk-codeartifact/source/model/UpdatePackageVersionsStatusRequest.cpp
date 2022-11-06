﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/UpdatePackageVersionsStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeArtifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdatePackageVersionsStatusRequest::UpdatePackageVersionsStatusRequest() : 
    m_domainHasBeenSet(false),
    m_domainOwnerHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_format(PackageFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_packageHasBeenSet(false),
    m_versionsHasBeenSet(false),
    m_versionRevisionsHasBeenSet(false),
    m_expectedStatus(PackageVersionStatus::NOT_SET),
    m_expectedStatusHasBeenSet(false),
    m_targetStatus(PackageVersionStatus::NOT_SET),
    m_targetStatusHasBeenSet(false)
{
}

Aws::String UpdatePackageVersionsStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_versionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> versionsJsonList(m_versions.size());
   for(unsigned versionsIndex = 0; versionsIndex < versionsJsonList.GetLength(); ++versionsIndex)
   {
     versionsJsonList[versionsIndex].AsString(m_versions[versionsIndex]);
   }
   payload.WithArray("versions", std::move(versionsJsonList));

  }

  if(m_versionRevisionsHasBeenSet)
  {
   JsonValue versionRevisionsJsonMap;
   for(auto& versionRevisionsItem : m_versionRevisions)
   {
     versionRevisionsJsonMap.WithString(versionRevisionsItem.first, versionRevisionsItem.second);
   }
   payload.WithObject("versionRevisions", std::move(versionRevisionsJsonMap));

  }

  if(m_expectedStatusHasBeenSet)
  {
   payload.WithString("expectedStatus", PackageVersionStatusMapper::GetNameForPackageVersionStatus(m_expectedStatus));
  }

  if(m_targetStatusHasBeenSet)
  {
   payload.WithString("targetStatus", PackageVersionStatusMapper::GetNameForPackageVersionStatus(m_targetStatus));
  }

  return payload.View().WriteReadable();
}

void UpdatePackageVersionsStatusRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_domainHasBeenSet)
    {
      ss << m_domain;
      uri.AddQueryStringParameter("domain", ss.str());
      ss.str("");
    }

    if(m_domainOwnerHasBeenSet)
    {
      ss << m_domainOwner;
      uri.AddQueryStringParameter("domain-owner", ss.str());
      ss.str("");
    }

    if(m_repositoryHasBeenSet)
    {
      ss << m_repository;
      uri.AddQueryStringParameter("repository", ss.str());
      ss.str("");
    }

    if(m_formatHasBeenSet)
    {
      ss << PackageFormatMapper::GetNameForPackageFormat(m_format);
      uri.AddQueryStringParameter("format", ss.str());
      ss.str("");
    }

    if(m_namespaceHasBeenSet)
    {
      ss << m_namespace;
      uri.AddQueryStringParameter("namespace", ss.str());
      ss.str("");
    }

    if(m_packageHasBeenSet)
    {
      ss << m_package;
      uri.AddQueryStringParameter("package", ss.str());
      ss.str("");
    }

}




﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SavingsPlans
{
namespace Model
{
  enum class SavingsPlanPaymentOption
  {
    NOT_SET,
    All_Upfront,
    Partial_Upfront,
    No_Upfront
  };

namespace SavingsPlanPaymentOptionMapper
{
AWS_SAVINGSPLANS_API SavingsPlanPaymentOption GetSavingsPlanPaymentOptionForName(const Aws::String& name);

AWS_SAVINGSPLANS_API Aws::String GetNameForSavingsPlanPaymentOption(SavingsPlanPaymentOption value);
} // namespace SavingsPlanPaymentOptionMapper
} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
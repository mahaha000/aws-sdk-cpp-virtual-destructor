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
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb/model/LedgerState.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QLDB
{
namespace Model
{
  class AWS_QLDB_API DescribeLedgerResult
  {
  public:
    DescribeLedgerResult();
    DescribeLedgerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLedgerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the ledger.</p>
     */
    inline DescribeLedgerResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline DescribeLedgerResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline DescribeLedgerResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the ledger.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the ledger.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the ledger.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the ledger.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the ledger.</p>
     */
    inline DescribeLedgerResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the ledger.</p>
     */
    inline DescribeLedgerResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the ledger.</p>
     */
    inline DescribeLedgerResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The current status of the ledger.</p>
     */
    inline const LedgerState& GetState() const{ return m_state; }

    /**
     * <p>The current status of the ledger.</p>
     */
    inline void SetState(const LedgerState& value) { m_state = value; }

    /**
     * <p>The current status of the ledger.</p>
     */
    inline void SetState(LedgerState&& value) { m_state = std::move(value); }

    /**
     * <p>The current status of the ledger.</p>
     */
    inline DescribeLedgerResult& WithState(const LedgerState& value) { SetState(value); return *this;}

    /**
     * <p>The current status of the ledger.</p>
     */
    inline DescribeLedgerResult& WithState(LedgerState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The date and time, in epoch time format, when the ledger was created. (Epoch
     * time format is the number of seconds elapsed since 12:00:00 AM January 1, 1970
     * UTC.)</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time, in epoch time format, when the ledger was created. (Epoch
     * time format is the number of seconds elapsed since 12:00:00 AM January 1, 1970
     * UTC.)</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The date and time, in epoch time format, when the ledger was created. (Epoch
     * time format is the number of seconds elapsed since 12:00:00 AM January 1, 1970
     * UTC.)</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time, in epoch time format, when the ledger was created. (Epoch
     * time format is the number of seconds elapsed since 12:00:00 AM January 1, 1970
     * UTC.)</p>
     */
    inline DescribeLedgerResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time, in epoch time format, when the ledger was created. (Epoch
     * time format is the number of seconds elapsed since 12:00:00 AM January 1, 1970
     * UTC.)</p>
     */
    inline DescribeLedgerResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The flag that prevents a ledger from being deleted by any user. If not
     * provided on ledger creation, this feature is enabled (<code>true</code>) by
     * default.</p> <p>If deletion protection is enabled, you must first disable it
     * before you can delete the ledger using the QLDB API or the AWS Command Line
     * Interface (AWS CLI). You can disable it by calling the <code>UpdateLedger</code>
     * operation to set the flag to <code>false</code>. The QLDB console disables
     * deletion protection for you when you use it to delete a ledger.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>The flag that prevents a ledger from being deleted by any user. If not
     * provided on ledger creation, this feature is enabled (<code>true</code>) by
     * default.</p> <p>If deletion protection is enabled, you must first disable it
     * before you can delete the ledger using the QLDB API or the AWS Command Line
     * Interface (AWS CLI). You can disable it by calling the <code>UpdateLedger</code>
     * operation to set the flag to <code>false</code>. The QLDB console disables
     * deletion protection for you when you use it to delete a ledger.</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtection = value; }

    /**
     * <p>The flag that prevents a ledger from being deleted by any user. If not
     * provided on ledger creation, this feature is enabled (<code>true</code>) by
     * default.</p> <p>If deletion protection is enabled, you must first disable it
     * before you can delete the ledger using the QLDB API or the AWS Command Line
     * Interface (AWS CLI). You can disable it by calling the <code>UpdateLedger</code>
     * operation to set the flag to <code>false</code>. The QLDB console disables
     * deletion protection for you when you use it to delete a ledger.</p>
     */
    inline DescribeLedgerResult& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_arn;

    LedgerState m_state;

    Aws::Utils::DateTime m_creationDateTime;

    bool m_deletionProtection;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
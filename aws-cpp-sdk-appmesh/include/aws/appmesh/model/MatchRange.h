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
#include <aws/appmesh/AppMesh_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{

  /**
   * <p>The range of values to match on. The first character of the range is included
   * in the
         range, though the last character is not. For example, if the
   * range specified were 1-100,
         only values 1-99 would be
   * matched.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/MatchRange">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API MatchRange
  {
  public:
    MatchRange();
    MatchRange(Aws::Utils::Json::JsonView jsonValue);
    MatchRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>End of the range value.</p>
     */
    inline long long GetEnd() const{ return m_end; }

    /**
     * <p>End of the range value.</p>
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * <p>End of the range value.</p>
     */
    inline void SetEnd(long long value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>End of the range value.</p>
     */
    inline MatchRange& WithEnd(long long value) { SetEnd(value); return *this;}


    /**
     * <p>Start of the range value.</p>
     */
    inline long long GetStart() const{ return m_start; }

    /**
     * <p>Start of the range value.</p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>Start of the range value.</p>
     */
    inline void SetStart(long long value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>Start of the range value.</p>
     */
    inline MatchRange& WithStart(long long value) { SetStart(value); return *this;}

  private:

    long long m_end;
    bool m_endHasBeenSet;

    long long m_start;
    bool m_startHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
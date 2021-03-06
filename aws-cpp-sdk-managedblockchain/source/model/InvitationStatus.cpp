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

#include <aws/managedblockchain/model/InvitationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchain
  {
    namespace Model
    {
      namespace InvitationStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");
        static const int ACCEPTING_HASH = HashingUtils::HashString("ACCEPTING");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");


        InvitationStatus GetInvitationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return InvitationStatus::PENDING;
          }
          else if (hashCode == ACCEPTED_HASH)
          {
            return InvitationStatus::ACCEPTED;
          }
          else if (hashCode == ACCEPTING_HASH)
          {
            return InvitationStatus::ACCEPTING;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return InvitationStatus::REJECTED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return InvitationStatus::EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InvitationStatus>(hashCode);
          }

          return InvitationStatus::NOT_SET;
        }

        Aws::String GetNameForInvitationStatus(InvitationStatus enumValue)
        {
          switch(enumValue)
          {
          case InvitationStatus::PENDING:
            return "PENDING";
          case InvitationStatus::ACCEPTED:
            return "ACCEPTED";
          case InvitationStatus::ACCEPTING:
            return "ACCEPTING";
          case InvitationStatus::REJECTED:
            return "REJECTED";
          case InvitationStatus::EXPIRED:
            return "EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InvitationStatusMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws

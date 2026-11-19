/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/PurchaseOrder.h>

#include <utility>

namespace Aws {
namespace AgreementService {
namespace Model {

/**
 */
class UpdatePurchaseOrdersRequest : public AgreementServiceRequest {
 public:
  AWS_AGREEMENTSERVICE_API UpdatePurchaseOrdersRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdatePurchaseOrders"; }

  AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

  AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Contains information about purchase order associations.</p>
   */
  inline const Aws::Vector<PurchaseOrder>& GetPurchaseOrders() const { return m_purchaseOrders; }
  inline bool PurchaseOrdersHasBeenSet() const { return m_purchaseOrdersHasBeenSet; }
  template <typename PurchaseOrdersT = Aws::Vector<PurchaseOrder>>
  void SetPurchaseOrders(PurchaseOrdersT&& value) {
    m_purchaseOrdersHasBeenSet = true;
    m_purchaseOrders = std::forward<PurchaseOrdersT>(value);
  }
  template <typename PurchaseOrdersT = Aws::Vector<PurchaseOrder>>
  UpdatePurchaseOrdersRequest& WithPurchaseOrders(PurchaseOrdersT&& value) {
    SetPurchaseOrders(std::forward<PurchaseOrdersT>(value));
    return *this;
  }
  template <typename PurchaseOrdersT = PurchaseOrder>
  UpdatePurchaseOrdersRequest& AddPurchaseOrders(PurchaseOrdersT&& value) {
    m_purchaseOrdersHasBeenSet = true;
    m_purchaseOrders.emplace_back(std::forward<PurchaseOrdersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PurchaseOrder> m_purchaseOrders;
  bool m_purchaseOrdersHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws

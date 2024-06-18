@interface PSUICellularDataPlanTableCell : PSUICarrierSpacePlanTableCell

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (id)primaryText;
- (id)detailText;
- (id)planStatus;
- (BOOL)canBeChecked;
- (id)planDescription;
- (id)_cellularPlanItem;

@end

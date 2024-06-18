@interface CKWalletItemSearchResultsCell : CKAttachmentSearchResultCell

+ (id)reuseIdentifier;

- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)layoutSubviews;
- (struct CGPoint { double x0; double x1; })avatarOffsetRTL;
- (struct CGPoint { double x0; double x1; })avatarOffsetLTR;
- (double)editModeHorizontalOffset;

@end

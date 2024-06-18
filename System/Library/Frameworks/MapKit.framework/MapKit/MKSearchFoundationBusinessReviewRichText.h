@interface MKSearchFoundationBusinessReviewRichText : MKSearchFoundationRichText

@property (getter=isReviewResolved) BOOL reviewResolved;

- (void)resolveReviewStringWithProviderNameByMapItem:(id)a0 lines:(id)a1 temporaryReviewString:(id)a2;
- (BOOL)isRichTextResolved;
- (void)resolveReviewStringWithProviderNameNotFoundByMapItem:(id)a0 lines:(id)a1 temporaryReviewString:(id)a2;

@end

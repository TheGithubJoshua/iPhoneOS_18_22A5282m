@class NSArray;

@interface CNComposeRecipientGroup : CNComposeRecipient {
    NSArray *_children;
}

- (id)children;
- (id)address;
- (id)displayString;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isGroup;
- (id)label;
- (id)initWithChildren:(id)a0 displayString:(id)a1;
- (id)placeholderName;
- (id)commentedAddress;
- (id)compositeName;
- (id)unlocalizedLabel;
- (id)sortedChildren;
- (void)_populateSortedChildren;
- (id)childrenWithCompleteMatches;
- (id)completelyMatchedAttributedStrings;
- (BOOL)wasCompleteMatch;
- (void)addRecipientToPasteboard:(id)a0;
- (BOOL)showsChevronButton;

@end

@class NSArray;

@interface MFComposeRecipientGroup : MFComposeRecipient {
    NSArray *_children;
}

- (id)children;
- (id)address;
- (id)displayString;
- (int)property;
- (int)recordID;
- (void *)record;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isGroup;
- (id)label;
- (id)initWithChildren:(id)a0 displayString:(id)a1;
- (id)placeholderName;
- (id)commentedAddress;
- (id)compositeName;
- (BOOL)isRemovableFromSearchResults;
- (id)unlocalizedLabel;
- (id)sortedChildren;
- (void)_populateSortedChildren;
- (id)childrenWithCompleteMatches;
- (id)completelyMatchedAttributedStrings;
- (BOOL)wasCompleteMatch;

@end

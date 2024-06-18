@class NSSet, NSMutableSet;

@interface CNSuggestedSaveRequest : CNSaveRequest

@property (retain, nonatomic) NSMutableSet *mutableConfirmedSuggestions;
@property (retain, nonatomic) NSMutableSet *mutableRejectedSuggestions;
@property (readonly, copy, nonatomic) NSSet *confirmedSuggestions;
@property (readonly, copy, nonatomic) NSSet *rejectedSuggestions;

- (void)confirmSuggestion:(id)a0;
- (id)storeIdentifier;
- (void).cxx_destruct;
- (void)rejectSuggestion:(id)a0;

@end

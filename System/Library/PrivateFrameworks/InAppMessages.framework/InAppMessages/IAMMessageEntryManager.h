@class NSArray, NSString, NSDictionary;

@interface IAMMessageEntryManager : NSObject {
    NSDictionary *_messageEntryByIdentifier;
    NSDictionary *_priorityMessageEntryByIdentifier;
    NSDictionary *_messageEntriesByEventTriggers;
    NSDictionary *_messageEntriesByContextPropertyTriggers;
    NSDictionary *_messageEntriesByUnknownKindTriggers;
    NSDictionary *_messageEntriesByTargetIdentifier;
}

@property (copy, nonatomic) NSArray *messageEntries;
@property (copy, nonatomic) NSString *modalTargetIdentifier;

+ (id)messageEntries:(id)a0 withSatisfiedPresentationTriggerForTriggerContext:(id)a1;
+ (void)_addMessageEntry:(id)a0 toTriggerKeyDictionary:(id)a1 atKey:(id)a2;
+ (id)uniqueMessageEntriesInMessageEntriesByTrigger:(id)a0;
+ (id)targetIdentifiersForMessageEntries:(id)a0;

- (void)addPriorityMessageEntry:(id)a0;
- (id)messageEntriesForContextPropertiesContext:(id)a0;
- (id)messageEntriesForTargetIdentifier:(id)a0;
- (id)messageEntryForIdentifier:(id)a0;
- (id)initWithModalTargetIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_updateMessageIndexes;
- (id)priorityMessageEntryForIdentifier:(id)a0;
- (id)messageEntriesByTriggerForEventContext:(id)a0;

@end

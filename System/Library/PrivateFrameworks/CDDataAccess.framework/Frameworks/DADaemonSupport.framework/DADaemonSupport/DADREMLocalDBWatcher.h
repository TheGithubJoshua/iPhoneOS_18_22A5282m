@class NSMapTable;

@interface DADREMLocalDBWatcher : NSObject {
    NSMapTable *_concernedRemindersPartyToBlockMap;
}

+ (id)sharedDBWatcher;

- (id)init;
- (void)removeConcernedRemindersParty:(id)a0;
- (void).cxx_destruct;
- (void)remindersDatabaseDidChange;
- (void)registerConcernedRemindersParty:(id)a0 withChangedBlock:(id /* block */)a1;

@end

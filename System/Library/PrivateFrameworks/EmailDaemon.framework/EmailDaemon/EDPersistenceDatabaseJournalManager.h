@class NSString, EDPersistenceDatabaseJournal, NSMutableIndexSet, NSMapTable, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface EDPersistenceDatabaseJournalManager : NSObject <EFLoggable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _journalLock;
    EDPersistenceDatabaseJournal *_currentJournal;
    BOOL _shouldDeleteCurrentJournal;
    NSMutableIndexSet *_journalNumbers;
    NSMutableIndexSet *_pendingDeleteJournalNumbers;
    NSMapTable *_journalsByIndexes;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, copy, nonatomic) NSString *journalDirectoryPath;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *checkExistingQueue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *deleteQueue;
@property (readonly, nonatomic) EDPersistenceDatabaseJournal *oldestJournal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)waitForDeletes;
- (void)mergedJournal:(id)a0;
- (void).cxx_destruct;
- (id)_getJournalWithBlock:(id /* block */)a0;
- (void)_journalNoLongerReferenced:(id)a0;
- (id)initWithBasePath:(id)a0;
- (void)_deleteJournalNumber:(unsigned long long)a0;
- (id)currentJournalCreateIfNeeded:(BOOL)a0;

@end

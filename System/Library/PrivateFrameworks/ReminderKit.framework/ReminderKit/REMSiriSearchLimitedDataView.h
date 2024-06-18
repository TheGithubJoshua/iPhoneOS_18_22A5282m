@class REMStore;

@interface REMSiriSearchLimitedDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

- (id)fetchRemindersMatchingTitle:(id)a0 dueAfter:(id)a1 dueBefore:(id)a2 isCompleted:(id)a3 hasLocation:(id)a4 location:(id)a5 error:(id *)a6;
- (id)initWithStore:(id)a0;
- (void).cxx_destruct;

@end

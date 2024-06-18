@class NSObject, CKDMMCSItemGroupSet, NSMutableArray, CKDOperation;
@protocol OS_dispatch_group;

@interface CKDMMCSItemGroupSetContext : NSObject <CKDCancelling>

@property (retain, nonatomic) CKDMMCSItemGroupSet *itemGroupSet;
@property (weak, nonatomic) CKDOperation *operation;
@property (retain, nonatomic) NSMutableArray *itemGroupContexts;
@property (copy, nonatomic) id /* block */ itemGroupCompletionBlock;
@property (copy, nonatomic) id /* block */ itemGroupSetCompletionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *itemGroupSetCompletionGroup;
@property (nonatomic) long long mmcsOperationType;

- (void)cancel;
- (void)start;
- (void)addItemGroupContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithItemGroupSet:(id)a0 itemGroupSetCompletionBlock:(id /* block */)a1;

@end

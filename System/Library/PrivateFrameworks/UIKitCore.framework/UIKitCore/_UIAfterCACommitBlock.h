@interface _UIAfterCACommitBlock : NSObject {
    _UIAfterCACommitBlock *_next;
    id /* block */ _block;
    _Atomic BOOL _transactionCleared;
}

+ (id)blockWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (BOOL)run;

@end

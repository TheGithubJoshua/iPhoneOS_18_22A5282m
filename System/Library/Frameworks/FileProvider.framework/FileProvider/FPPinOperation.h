@class NSArray;

@interface FPPinOperation : FPActionOperation {
    NSArray *_items;
}

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (void)actionMain;
- (void)presendNotifications;

@end

@class NSString, NSMutableDictionary, RBSStateCaptureSet, NSObject;
@protocol OS_dispatch_queue;

@interface RBStateCaptureManager : NSObject <RBStateCaptureManaging> {
    NSMutableDictionary *_itemsByIdentifier;
    RBSStateCaptureSet *_itemsWithoutIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addItem:(id)a0;
- (void)removeItem:(id)a0;
- (id)init;
- (id)identifiers;
- (void)addItemWithTitle:(id)a0 identifier:(id)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (id)stateForSubsystem:(id)a0;
- (void)addItem:(id)a0 withIdentifier:(id)a1;
- (void)removeItemWithIdentifier:(id)a0;

@end

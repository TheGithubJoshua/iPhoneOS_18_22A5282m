@class NSString, NSMutableArray;

@interface BLSHGenericSceneDelegateWithActionHandlers : NSObject <BLSSceneDelegateWithActionHandlers> {
    NSMutableArray *_actionHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)removeActionHandler:(id)a0 forScene:(id)a1;
- (void)addActionHandler:(id)a0 forScene:(id)a1;
- (void).cxx_destruct;

@end

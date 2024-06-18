@class NSArray, NSString;

@interface _GCKeyboardEventFusion : NSObject <_GCKeyboardEventSource>

@property (retain, nonatomic) NSArray *observations;
@property (copy) NSArray *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithSources:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)observeKeyboardEvents:(id /* block */)a0;

@end

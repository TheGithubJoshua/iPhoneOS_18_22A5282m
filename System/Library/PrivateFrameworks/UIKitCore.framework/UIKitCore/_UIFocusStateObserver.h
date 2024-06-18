@class NSMapTable;

@interface _UIFocusStateObserver : NSObject {
    NSMapTable *_observers;
    struct { unsigned char wasActive : 1; } _flags;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;

- (void)removeObserver:(id)a0;
- (id)init;
- (id)descriptionBuilder;
- (void).cxx_destruct;
- (id)description;
- (id)addObserver:(id /* block */)a0;
- (void)notifyObserversIfNecessary;

@end

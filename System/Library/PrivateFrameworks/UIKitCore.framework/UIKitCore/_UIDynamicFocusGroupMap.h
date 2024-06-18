@class _UIFocusGroupMap;

@interface _UIDynamicFocusGroupMap : NSObject {
    _UIFocusGroupMap *_impl;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoordinateSpace:(id)a0;
- (id)focusGroupIdentifierForItem:(id)a0;
- (id)initWithBackingFocusGroupMap:(id)a0;

@end

@class NSString, NSMapTable;
@protocol SBReusableViewMapDelegate;

@interface SBReusableViewMap : NSObject <BSDescriptionProviding> {
    NSMapTable *_recycledViewsByClass;
    BOOL _invalidated;
}

@property (weak, nonatomic) id<SBReusableViewMapDelegate> delegate;
@property (readonly, nonatomic) unsigned long long recycledViewCount;
@property (readonly, nonatomic) unsigned long long viewRecyclingCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)purgeAllViews;
- (void)enumerateRecycledViewsUsingBlock:(id /* block */)a0;
- (id)initWithDelegate:(id)a0;
- (BOOL)isViewRecycled:(id)a0;
- (id)dequeueReusableViewOfClass:(Class)a0;
- (void)recycleView:(id)a0;
- (void)purgeViewsForClass:(Class)a0;
- (id)succinctDescription;
- (void)invalidate;
- (void).cxx_destruct;
- (void)purgeView:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)newViewOfClass:(Class)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)addRecycledViewsOfClass:(Class)a0 upToCount:(unsigned long long)a1;
- (void)dealloc;
- (id)viewOfClass:(Class)a0;

@end

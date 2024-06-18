@class NSMutableDictionary, NSMutableOrderedSet;
@protocol SBHMultiplexingManagerDelegate;

@interface SBHMultiplexingManager : NSObject

@property (weak, nonatomic) id<SBHMultiplexingManagerDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *viewControllersForIdentifier;
@property (retain, nonatomic) NSMutableDictionary *multiplexingViewControllersForIdentifier;
@property (retain, nonatomic) NSMutableDictionary *cachedRecentViewControllersForIdentifier;
@property (retain, nonatomic) NSMutableOrderedSet *cachedRecentViewControllerIdentifiers;
@property (nonatomic) unsigned long long cachedRecentViewControllerCountLimit;

- (BOOL)hasViewControllerForIdentifier:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_trimCachedRecentViewControllers;
- (id)initWithDelegate:(id)a0;
- (id)activeMultiplexingViewControllerForIdentifier:(id)a0;
- (id)viewControllerForIdentifier:(id)a0;
- (id)succinctDescription;
- (void)discardCachedRecentViewControllers;
- (id)activeMultiplexingViewControllerForViewController:(id)a0;
- (void)discardCachedRecentViewControllersForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)description;
- (void)validateActiveMultiplexingViewControllerForIdentifier:(id)a0;
- (id)newMultiplexingViewControllerForIdentifier:(id)a0 atLevel:(double)a1;
- (id)_activeMultiplexingViewControllerForIdentifier:(id)a0;
- (void)discardMultiplexingViewController:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_modifyViewControllersForIdentifier:(id)a0 reusingCacheViewControllersIfNecessary:(BOOL)a1 withBlock:(id /* block */)a2;
- (void)setViewController:(id)a0 forIdentifier:(id)a1;
- (void)enumerateAllViewControllersUsingBlock:(id /* block */)a0;
- (BOOL)_cacheLastDiscardedViewController:(id)a0 forIdentifier:(id)a1;

@end

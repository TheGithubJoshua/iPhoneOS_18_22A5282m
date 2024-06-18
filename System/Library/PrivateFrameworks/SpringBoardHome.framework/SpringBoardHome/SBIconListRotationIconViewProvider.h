@class SBIconListView;

@interface SBIconListRotationIconViewProvider : NSObject <SBIconViewProviding>

@property (readonly, weak, nonatomic) SBIconListView *listView;

- (id)dequeueReusableIconViewOfClass:(Class)a0;
- (BOOL)isIconViewRecycled:(id)a0;
- (void).cxx_destruct;
- (void)recycleIconView:(id)a0;
- (void)configureIconView:(id)a0 forIcon:(id)a1;
- (id)initWithListView:(id)a0;

@end

@class HMHome, NSMutableSet;

@interface HUSoftwareUpdateInfoItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *softwareUpdateItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

- (id)items;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)invalidationReasons;

@end

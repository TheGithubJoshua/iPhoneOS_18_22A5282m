@class HMHome, NSMutableSet, HFDemoModeFaceRecognitionDataSource;

@interface HFDemoModeFaceRecognitionItemProvider : HFItemProvider

@property (nonatomic) long long mode;
@property (retain, nonatomic) HFDemoModeFaceRecognitionDataSource *dataSource;
@property (retain, nonatomic) NSMutableSet *personItems;
@property (retain, nonatomic) HMHome *home;

- (id)items;
- (id)init;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)initForMode:(long long)a0 home:(id)a1;

@end

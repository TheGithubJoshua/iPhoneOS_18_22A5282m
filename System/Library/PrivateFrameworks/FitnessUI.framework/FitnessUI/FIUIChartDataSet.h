@class NSArray;
@protocol FIUIChartDataSetDataSource;

@interface FIUIChartDataSet : NSObject {
    NSArray *_points;
    NSArray *_labels;
}

@property (weak, nonatomic) id<FIUIChartDataSetDataSource> dataSource;
@property (nonatomic) long long tag;

- (id)points;
- (void)reloadData;
- (void).cxx_destruct;
- (id)description;
- (id)maxYValue;
- (id)minYValue;
- (id)labelsForSet;
- (id)maxXValue;
- (id)minXValue;

@end

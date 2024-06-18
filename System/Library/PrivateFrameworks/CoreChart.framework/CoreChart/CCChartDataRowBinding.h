@protocol CCChartDataRow;

@interface CCChartDataRowBinding : NSDictionary {
    id<CCChartDataRow> _dataRow;
}

@property (readonly) unsigned long long count;

- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (id)keyEnumerator;
- (id)chartViewDataRowID;
- (id)initWithChartDataRow:(id)a0;

@end

@class NSArray, NSMutableArray;

@interface XREngineeringTypeBitpackedEncodingConvention : XREngineeringTypeEncodingConvention {
    NSMutableArray *_entries;
}

@property (readonly, nonatomic) NSArray *entries;

- (id)init;
- (void).cxx_destruct;
- (void)addEntry:(id)a0;

@end

@class NSDictionary, NSArray, NSMutableDictionary;

@interface PKCloudStoreRecord : NSObject {
    NSMutableDictionary *_records;
}

@property (copy, nonatomic) NSDictionary *cloudStoreSpecificKeys;
@property (readonly, nonatomic) NSArray *records;

- (void)addRecord:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRecords:(id)a0;
- (id)recordsWithRecordType:(id)a0;

@end
@class NSData, NSString;

@interface KVDatasetInfo : NSObject <KVJSONEncodable, KVJSONDecodable> {
    const struct DatasetInfo { unsigned char x0[1]; } *_datasetInfo;
}

@property (readonly, nonatomic) NSData *buffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)itemCount;
- (id)userId;
- (id)init;
- (id)deviceId;
- (long long)itemType;
- (id)originAppId;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)capturedTime;
- (id)initWithItemType:(long long)a0 originAppId:(id)a1 deviceId:(id)a2 userId:(id)a3 lastModifiedTime:(id)a4 capturedTime:(id)a5 itemCount:(unsigned int)a6 error:(id *)a7;
- (id)initWithItemType:(long long)a0 originAppId:(id)a1 itemCount:(unsigned int)a2 error:(id *)a3;
- (id)JSONWithIndent:(unsigned char)a0;
- (id)initFromDictionary:(id)a0 error:(id *)a1;
- (id)initWithBuffer:(id)a0 error:(id *)a1;
- (id)initWithItemType:(long long)a0 originAppId:(id)a1 userId:(id)a2 itemCount:(unsigned int)a3 error:(id *)a4;
- (id)initWithSizePrefixedBuffer:(id)a0 error:(id *)a1;
- (BOOL)isEqualToDatasetInfo:(id)a0;
- (id)lastModifiedTime;

@end

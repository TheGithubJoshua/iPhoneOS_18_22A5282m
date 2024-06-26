@class NSData, NSString;

@interface ICCloudSyncingObjectActivityEvent : NSObject <CRCoding, CRDataType>

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSData *fallbackData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerWithCRCoder;

- (id)deltaSince:(id)a0 in:(id)a1;
- (id)initWithCRCoder:(id)a0;
- (id)tombstone;
- (void).cxx_destruct;
- (void)walkGraph:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)setDocument:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (void)encodeWithCRCoder:(id)a0;
- (void)mergeWith:(id)a0;
- (id)initWithData:(id)a0 fallbackData:(id)a1;

@end

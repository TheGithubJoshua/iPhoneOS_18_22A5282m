@class NSString;

@interface HMAccessoryInfoPrimaryUser : NSObject

@property (readonly, copy) NSString *uuidString;
@property (readonly) unsigned long long selectionType;

- (id)initWithProtoData:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)protoData;
- (int)_primaryUserInfoEventSelectionType:(unsigned long long)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithUUIDString:(id)a0 selectionType:(unsigned long long)a1;
- (id)protoPayload;

@end

@class NSString, NSArray, CSAudioRecordDeviceInfo;

@interface CSAudioDeviceInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CSAudioRecordDeviceInfo *recordDeviceInfo;
@property (readonly, copy, nonatomic) NSString *playbackRoute;
@property (readonly, copy, nonatomic) NSArray *playbackDeviceTypeList;

- (id)initWithCoder:(id)a0;
- (id)xpcObject;
- (id)initWithXPCObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecordDeviceInfo:(id)a0 playbackRoute:(id)a1 playbackDeviceTypeList:(id)a2;

@end

@class NSArray, NSData;

@interface HMDCameraRecordingSupportedAudioConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *codecConfigurations;
@property (readonly, copy) NSData *tlvData;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)initWithCodecConfigurations:(id)a0;

@end

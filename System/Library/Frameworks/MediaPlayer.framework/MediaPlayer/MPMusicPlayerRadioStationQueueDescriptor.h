@class MPRadioStation;

@interface MPMusicPlayerRadioStationQueueDescriptor : MPMusicPlayerQueueDescriptor

@property (readonly, nonatomic) MPRadioStation *radioStation;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRadioStation:(id)a0;

@end

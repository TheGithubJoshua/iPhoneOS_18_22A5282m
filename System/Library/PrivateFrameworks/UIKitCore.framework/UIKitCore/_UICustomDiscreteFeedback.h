@interface _UICustomDiscreteFeedback : _UIDiscreteFeedback

@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) unsigned int systemSoundID;

+ (id)customDiscreteFeedbackWithEventType:(unsigned long long)a0 systemSoundID:(unsigned int)a1;
+ (id)type;

- (id)dictionaryRepresentation;
- (unsigned int)_effectiveSystemSoundID;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_effectiveEventType;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@class NSData, NSMutableData;

@interface CLFindMyAccessorySoundSequence : NSObject <NSCopying, NSSecureCoding> {
    NSMutableData *_encodedSequence;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *encodedSequence;
@property (readonly) unsigned long long type;

+ (id)defaultSequence;
+ (id)rangingSequence;
+ (id)shortSequence;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithType:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)addSoundBlockWithAsset:(unsigned long long)a0 loopCount:(unsigned char)a1 duration:(unsigned short)a2;
- (id)initWithType:(unsigned long long)a0 encodedSequence:(id)a1;

@end

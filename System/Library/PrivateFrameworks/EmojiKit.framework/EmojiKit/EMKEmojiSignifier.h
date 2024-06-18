@class NSString;

@interface EMKEmojiSignifier : NSObject <NSCopying> {
    NSString *_string;
}

@property (readonly) NSString *string;

- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

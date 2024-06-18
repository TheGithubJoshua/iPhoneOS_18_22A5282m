@class NSString;

@interface SNKeyValueMutation : NSObject <NSCopying> {
    int _type;
    NSString *_keyPath;
    id _value;
}

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

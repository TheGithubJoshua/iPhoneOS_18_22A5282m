@class NSString, NSDate;

@interface TimedEndpoint : NSObject {
    NSString *_trigger;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) long long interfaceType;
@property (readonly, nonatomic) unsigned long long stallType;
@property (readonly, nonatomic) BOOL foreground;

- (void)touch;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithEndpoint:(id)a0 trigger:(id)a1 interfaceType:(long long)a2 stallType:(unsigned long long)a3 foreground:(BOOL)a4;

@end

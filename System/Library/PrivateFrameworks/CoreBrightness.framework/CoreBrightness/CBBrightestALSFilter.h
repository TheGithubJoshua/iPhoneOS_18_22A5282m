@class NSMutableDictionary;

@interface CBBrightestALSFilter : CBFilter {
    NSMutableDictionary *_alsEvents;
}

- (id)init;
- (void)forgetDataForService:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)filterEvent:(id)a0;
- (void)dealloc;
- (BOOL)displayBrightnessFactorPropertyHandler:(id)a0;

@end

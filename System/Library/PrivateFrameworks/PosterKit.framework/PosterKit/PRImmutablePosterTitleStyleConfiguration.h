@class PRPosterColor, NSString, PRPosterTimeFontConfiguration;

@interface PRImmutablePosterTitleStyleConfiguration : PRPosterTitleStyleConfiguration {
    BOOL _userConfigured;
    BOOL _alternateDateEnabled;
    PRPosterTimeFontConfiguration *_timeFontConfiguration;
    PRPosterColor *_titleColor;
    NSString *_timeNumberingSystem;
    double _contentsLuminance;
    NSString *_groupName;
}

- (BOOL)isAlternateDateEnabled;
- (id)titleColor;
- (id)initWithTimeFontConfiguration:(id)a0 titleColor:(id)a1 timeNumberingSystem:(id)a2 userConfigured:(BOOL)a3 contentsLuminance:(double)a4 alternateDateEnabled:(BOOL)a5 groupName:(id)a6;
- (id)timeFontConfiguration;
- (id)timeNumberingSystem;
- (double)contentsLuminance;
- (BOOL)isUserConfigured;
- (id)groupName;
- (void).cxx_destruct;

@end

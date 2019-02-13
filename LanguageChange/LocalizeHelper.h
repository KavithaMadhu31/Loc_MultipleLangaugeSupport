//
//  LocalizeHelper.h
//  LanguageChange
//
//  Created by murganandam on 13/02/19.
//  Copyright © 2019 murganandam. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LocalizeHelper : NSObject
// a singleton:
+ (LocalizeHelper*) sharedLocalSystem;

// this gets the string localized:
- (NSString*) localizedStringForKey:(NSString*) key;

//set a new language:
- (void) setLanguage:(NSString*) lang;             
@end

NS_ASSUME_NONNULL_END

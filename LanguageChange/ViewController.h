//
//  ViewController.h
//  LanguageChange
//
//  Created by murganandam on 13/02/19.
//  Copyright © 2019 murganandam. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ViewController : UIViewController
- (IBAction)localizedButton:(id)sender;
@property (strong, nonatomic) IBOutlet UILabel *labelValue;

@end

NS_ASSUME_NONNULL_END

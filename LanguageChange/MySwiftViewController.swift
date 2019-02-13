//
//  MySwiftViewController.swift
//  LanguageChange
//
//  Created by murganandam on 13/02/19.
//  Copyright © 2019 murganandam. All rights reserved.
//

import UIKit

class MySwiftViewController: UIViewController {
let localHelper = LocalizeHelper.init()
     var doubleTap : Bool! = false
    @IBOutlet var firstName: UILabel!
    
    @IBOutlet var lastName: UILabel!
    override func viewDidLoad() {
        super.viewDidLoad()
       firstName.text = localHelper.localizedString(forKey: "FirstName")
        lastName.text = localHelper.localizedString(forKey: "LastName")
    }
    

    @IBAction func LocalizationFn(_ sender: Any) {
       
        if (doubleTap) {
            localHelper.setLanguage("en")
            
            doubleTap = false
        } else {
            localHelper.setLanguage("ta-IN")
            doubleTap = true
        }
        firstName.text = localHelper.localizedString(forKey: "FirstName")
        lastName.text = localHelper.localizedString(forKey: "LastName")
    }
  

}
